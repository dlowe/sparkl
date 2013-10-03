# sparkl

A tiny implementation of command-line 'sparkline' data visualization.

## Synopsis

  $ sparkl 0 1 2 3 4 5 6 7
  ▁▂▃▄▅▆▇▉

  $ echo sparkline of file lengths: `wc -c * | awk '{print $1}' | xargs sparkl`
  sparkline of file sizes: ▁▁▁▃▃▂▁▂▁▁▉

## Description

This is a handy little tool for visualizing numeric series from the
command-line, using 'sparklines'. Pass it a numeric series as arguments, and
sparkl will display a sparkline graph, which you can use to very quickly get a
sense of the shape of your data.

## Limitations

* Crashes with 0 arguments. It'd be trivial to fix, but adds a few bytes to the
  code.
* Produces bogus graphs when given > about 5000 arguments.
* Only works if your terminal is utf-8 and your font supports the 8 glyphs
  used.
* Produces a few harmless compiler warnings.

## Obfuscation

The code is very terse. I was torn between submitting this version, and a
one-line version compressed using a couple more -D flags.

Hand-rolled utf-8 sequence, magic numbers (what's that 7 for?), meaningless
variable names, reused variables, and so on.

## Acknowledgements

Edward Tufte invented sparklines (among other things.) Brilliant.

Zach Holman's 'spark' utility (https://github.com/holman/spark) was absolutely
an inspiration.

As I was writing up this description, I discovered I'm not the first person to
write an obfuscated C sparkline utility! Vicent Martí created this one years
(!) ago: https://gist.github.com/vmg/1368661. (My implementation is completely
independent.)
