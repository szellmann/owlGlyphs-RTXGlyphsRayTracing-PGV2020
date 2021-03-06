// ======================================================================== //
// Copyright 2018-2020 The Contributors                                     //
//                                                                          //
// Licensed under the Apache License, Version 2.0 (the "License");          //
// you may not use this file except in compliance with the License.         //
// You may obtain a copy of the License at                                  //
//                                                                          //
//     http://www.apache.org/licenses/LICENSE-2.0                           //
//                                                                          //
// Unless required by applicable law or agreed to in writing, software      //
// distributed under the License is distributed on an "AS IS" BASIS,        //
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. //
// See the License for the specific language governing permissions and      //
// limitations under the License.                                           //
// ======================================================================== //

#pragma once

#include "glyphs/OptixGlyphs.h"

namespace glyphs {

  /*! Simple sphere glyphs;
    Sphere glyphs are "affine glyphs", i.e. under transformation
    they can become general ellipsoids and that behavior is desired
  */
  struct SphereGlyphs : public OWLGlyphs
  {
    SphereGlyphs();
    
    void build(Glyphs::SP glyphs,
               Triangles::SP triangles) override;

  private:
    std::vector<std::pair<OWLGroup,affine3f>> buildGlyphs(Glyphs::SP glyphs);
  };
}


