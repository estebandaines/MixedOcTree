/*
 <Mix-mesher: region type. This program generates a mixed-elements mesh>
 
 Copyright (C) <2013,2017>  <Claudio Lobos>
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/gpl.txt>
 */

#ifndef Visitor_h
#define Visitor_h 1

/*
 * Parent definition of visitors
 * Visitors shall extend this main class to get forward declarations,
 * and also for operations that extends to more than one class...
 */

namespace Clobscode {

    //forward declarations
    class Octant;

    class Visitor {

    public:
        Visitor() { }

        virtual bool visit(Octant *o) { return false; }
    };


}

#endif //Visitor_h
