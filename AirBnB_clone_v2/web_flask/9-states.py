#!/usr/bin/python3
"""Run simple server using Flask"""
from flask import Flask, render_template
import models

app = Flask(__name__)


@app.route('/states', strict_slashes=False)
def states():
    states_dict = models.storage.all('State')
    states_objs = states_dict.values()

    return render_template('9-states.html', states=states_objs)


@app.route('/states/<id>', strict_slashes=False)
def states_id(id):
    states_dict = models.storage.all('State')
    cities_dict = models.storage.all('City')
    states_objs = states_dict.values()
    cities_objs = cities_dict.values()

    for obj in states_objs:
        if id == obj.id:
            return render_template('9-states.html',
                                   single_state=obj, cities=cities_objs)

    return render_template('9-states.html', fayul='Not found!')


@app.teardown_appcontext
def foo(var):
    models.storage.close()


if __name__ == "__main__":
    app.run('0.0.0.0', 5000)
