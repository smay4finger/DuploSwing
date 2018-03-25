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

difference()
{
    cylinder(d = 80, h = 30);
    translate([0, 0, 10]) cylinder(d = 70, h = 30.1);
}

translate([15, 50.5/2, 10+14.5/2]) rotate([90, 0, 0]) cylinder(d = 14.5, h = 50.5);
translate([-15, 50.5/2, 10+14.5/2]) rotate([90, 0, 0]) cylinder(d = 14.5, h = 50.5);
