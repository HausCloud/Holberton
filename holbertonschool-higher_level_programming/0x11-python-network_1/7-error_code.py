#!/usr/bin/python3
"""Python script that returns the request or error code"""


if __name__ == "__main__":
    import requests
    import sys

    url = sys.argv[1]
    req = requests.get(sys.argv[1])
    if req.status_code >= 400:
        print("Error code: {}".format(req.status_code))
    else:
        print(req._content.decode())
