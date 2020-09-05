#!/bin/bash
# Display all HTTP methods
curl -sI -X OPTIONS "$1" | grep 'Allow' | cut -d ' ' -f 2-
