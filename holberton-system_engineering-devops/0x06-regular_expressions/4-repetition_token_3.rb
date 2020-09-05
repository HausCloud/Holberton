#!/usr/bin/env ruby
# h[^o]*n works too or hbt*n
puts ARGV[0].scan(/(hb(t+)?n)/).join
