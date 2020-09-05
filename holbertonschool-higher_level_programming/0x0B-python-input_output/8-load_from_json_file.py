#!/usr/bin/python3
def load_from_json_file(filename):
    import json
    with open(filename, 'r') as var:
        jstring = var.read()
        return json.loads(jstring)
