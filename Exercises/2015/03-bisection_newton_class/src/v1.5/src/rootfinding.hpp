/*!
  \file rootfinding.hpp
  \brief A collection of classes for rootfinding
  \author Daniele A. Di Pietro
  \date 8-26-2005
*/

#ifndef ROOTFINDING_HPP
#define ROOTFINDING_HPP 1

#include <algorithm>
#include <cmath>

namespace RootFinding
{
  //! Type for real numbers
  typedef double real;

  //! Type for function pointers
  typedef real (*fctptr)(real);

  //! Type for convergence check
  enum checkT {
    INCREMENT, //!< Check the difference between subsequent iterates
    RESIDUAL,  //!< Check the residual
    BOTH       //!< Check both
  };
} // namespace RootFinding
#endif
