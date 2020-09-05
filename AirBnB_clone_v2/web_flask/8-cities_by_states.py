#!/usr/bin/python3
"""Run simple server using Flask"""
from flask import Flask, render_template
import models

app = Flask(__name__)


@app.route('/cities_by_states', strict_slashes=False)
def list_cities_by_state():
    states_dict = models.storage.all('State')
    cities_dict = models.storage.all('City')
    states_objs = states_dict.values()
    cities_objs = cities_dict.values()

    return render_template('8-cities_by_states.html',
                           states=states_objs, cities=cities_objs)


@app.teardown_appcontext
def foo(var):
    models.storage.close()


if __name__ == "__main__":
    app.run('0.0.0.0', 5000)
