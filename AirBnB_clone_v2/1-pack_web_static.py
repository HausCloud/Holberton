#!/usr/bin/python3
import fabric

def do_pack():
    from fabric.operations import run, sudo, local, get, put, prompt, reboot
    import os
    import datetime

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
