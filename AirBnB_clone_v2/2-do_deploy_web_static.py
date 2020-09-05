#!/usr/bin/python3
import fabric
from fabric.api import env
from fabric.operations import run, sudo, local, get, put, prompt, reboot
import os

env.hosts = ['34.74.205.140', '34.73.150.28']

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
