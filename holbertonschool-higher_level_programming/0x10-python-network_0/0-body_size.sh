#!/bin/bash
# Send request to URL and display size of body
curl -sI "$1" | grep -P "(?<=Content-Length:\s).*" | cut -d " " -f 2
