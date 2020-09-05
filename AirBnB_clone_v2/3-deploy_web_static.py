#!/usr/bin/python3
import fabric
from fabric.operations import run, sudo, local, get, put, prompt, reboot
from fabric.api import env
import os
import datetime

env.hosts = ['34.74.205.140', '34.73.150.28']

def do_pack():

    if ((os.path.exists('./versions') is True) and (os.path.isfile
                                                    ('./versions') is False)):
        pass
    elif ((os.path.exists('./versions') is True) and (os.path.isfile
                                                      ('./versions') is True)):
        local("rm versions && mkdir versions")
    else:
        local("mkdir versions")

    current_date = datetime.datetime.now()
    file_name = current_date.strftime("web_static_%Y%-m%d%H%M%S.tgz")
    command = "tar -cavf " + file_name + " web_static"
    move_file = "mv " + file_name + " versions"

    local(command)
    local(move_file)
    if (os.path.exists('./versions/' + file_name) is True):
        return (os.path.abspath('./versions/' + file_name))
    else:
        return None

def do_deploy(archive_path):

    if (os.path.exists(archive_path) is False):
        return False

    archive_name = archive_path.split('/')[1]
    archive_no_ext = archive_name.split('.')[0]

    put(archive_path, "/tmp/")
    run("tar -xvzf /tmp/{} -C /data/web_static/releases/".format(archive_name))
    run("mv /data/web_static/releases/web_static /data/web_static/releases/{}".format(archive_no_ext))
    run("rm /tmp/{}".format(archive_name))
    run("unlink /data/web_static/current")
    run("ln -s /data/web_static/releases/{} /data/web_static/current".format(archive_no_ext))

    return True

def deploy():
    archive_path = do_pack()
    if archive_path is None:
        return False
    return do_deploy(archive_path)
