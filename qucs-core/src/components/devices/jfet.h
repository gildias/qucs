/*
 * jfet.h - jfet class definitions
 *
 * Copyright (C) 2004 Stefan Jahn <stefan@lkcc.org>
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this package; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.  
 *
 * $Id: jfet.h,v 1.3 2004-07-27 16:43:59 ela Exp $
 *
 */

#ifndef __JFET_H__
#define __JFET_H__

class net;

class jfet : public circuit
{
 public:
  jfet ();
  void calcSP (nr_double_t);
  void calcNoise (nr_double_t);
  void calcDC (void);
  void initDC (dcsolver *);
  void calcOperatingPoints (void);

 private:
  nr_double_t UgsPrev;
  nr_double_t UgdPrev;
  nr_double_t ggs, ggd, gm, gds, Ids;
  circuit * rs;
  circuit * rd;
};

#endif /* __JFET_H__ */
