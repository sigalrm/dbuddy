#!/usr/bin/perl

use warnings;
use strict;

my @all;

while (<>) {
    chomp;
    my @a = split(/\s\s+/);

    push @all, @a;
}

print "\tm_map[\"$_\"] = \"-\";\n" for sort { $a cmp $b } @all;
