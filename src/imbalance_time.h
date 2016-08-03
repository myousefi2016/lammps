/* -*- c++ -*- ----------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   http://lammps.sandia.gov, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#ifndef LMP_IMBALANCE_TIME_H
#define LMP_IMBALANCE_TIME_H

#include "imbalance.h"

namespace LAMMPS_NS {

class ImbalanceTime : public Imbalance {
 public:
  ImbalanceTime() : Imbalance() {};
  virtual ~ImbalanceTime() {};

  // disallow copy constructor and assignment operator
 private:
  ImbalanceTime(const ImbalanceTime &) {};
  ImbalanceTime &operator=(const ImbalanceTime &) {return *this;};

  // required member functions
 public:
  // parse options. return number of arguments consumed.
  virtual int options(LAMMPS *lmp, int narg, char **arg);
  // compute per-atom imbalance and apply to weight array
  virtual void compute(LAMMPS *lmp, double *weight);
};

}

#endif
