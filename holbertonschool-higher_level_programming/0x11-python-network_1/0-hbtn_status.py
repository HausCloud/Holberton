#!/usr/bin/python3
"""Use urllib to grab HTML response"""

if __name__ == "__main__":
    import urllib.request

    with urllib.request.urlopen('https://intranet.hbtn.io/status') as response:
        html = response.read()
        print("Body response:\n\t- type: {}\n\t- content: {}\n\t- \
utf8 content: {}".format(type(html), html, html.decode('utf-8')))
