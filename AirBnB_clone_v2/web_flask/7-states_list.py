#!/usr/bin/python3
"""Run simple server using Flask"""
from flask import Flask, render_template
import models

app = Flask(__name__)


@app.route('/states_list', strict_slashes=False)
def list_states():
    states_dict = models.storage.all('State')
    states_objs = states_dict.values()
    return render_template('7-states_list.html', states=states_objs)


@app.teardown_appcontext
def foo(error):
    models.storage.close()


if __name__ == "__main__":
    app.run('0.0.0.0', 5000)
