/*
    DuploSwing - LEGO Duplo Swing swinging forever
    Copyright (C) 2018  Stefan May

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

include <DobloFactory/doblo-factory.scad>

$fs = 2;
$fa = 1;

difference()
{
    union()
    {
        translate([0, 0, 10]) nibbles(-1.5, -2, 0, 3, 4, DOBLO);
        translate([0, 0, 5]) cylinder(d=80, 5, true);
        cylinder(d=70, 5, true);
    }
    cylinder(d1=15+9*2, d2=15, 9, true, $fa = 1);
}
