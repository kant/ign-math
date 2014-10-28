/*
 * Copyright (C) 2012-2014 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/
#ifndef _IGNITION_AFFINE_EXCEPTION_HH_
#define _IGNITION_AFFINE_EXCEPTION_HH_

#include <stdexcept>
#include <ignition/math/Helpers.hh>

namespace ignition
{
  namespace math
  {
    /// \class AffineException AffineException.hh
    /// ignition/math/AffineException.hh
    /// \brief Exception that is thrown when a matrix is not affine.
    class IGNITION_VISIBLE AffineException : public std::runtime_error
    {
      public: AffineException() : std::runtime_error("Not and affine matrix")
              {}
    };
  }
}
#endif