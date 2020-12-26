/*!
 * \file CSurfaceElementFEM.cpp
 * \brief Implementations of the member functions of CSurfaceElementFEM.
 * \author E. van der Weide
 * \version 7.0.8 "Blackbird"
 *
 * SU2 Project Website: https://su2code.github.io
 *
 * The SU2 Project is maintained by the SU2 Foundation
 * (http://su2foundation.org)
 *
 * Copyright 2012-2020, SU2 Contributors (cf. AUTHORS.md)
 *
 * SU2 is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * SU2 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with SU2. If not, see <http://www.gnu.org/licenses/>.
 */

#include "../../../include/geometry/fem_grid/CSurfaceElementFEM.hpp"
#include "../../../include/geometry/primal_grid/CPrimalGridBoundFEM.hpp"
#include "../../../include/geometry/fem_grid/CVolumeElementFEM_DG.hpp"

/*---------------------------------------------------------------------*/
/*---        Public member functions of CSurfaceElementFEM.         ---*/
/*---------------------------------------------------------------------*/

void CSurfaceElementFEM::GetCornerPointsFace(unsigned short &nPointsPerFace,
                                             unsigned long  faceConn[]) {

  /*--- Get the corner connectivities of the face, local to the element. ---*/
  CPrimalGridBoundFEM::GetLocalCornerPointsFace(VTK_Type, nPolyGrid, nDOFsGrid,
                                                nPointsPerFace, faceConn);

  /*--- Convert the local values of faceConn to global values. ---*/
  for(unsigned short j=0; j<nPointsPerFace; ++j) {
    unsigned long nn = faceConn[j];
    faceConn[j] = nodeIDsGrid[nn];
  }
}

void CSurfaceElementFEM::InitGridVelocities(const unsigned short nDim) {

  SU2_MPI::Error(string("Not implemented yet"), CURRENT_FUNCTION);
}

void CSurfaceElementFEM::MetricTermsIntegrationPoints(const bool                         viscousTerms,
                                                      const unsigned short               nDim,
                                                      const vector<CVolumeElementFEM_DG> &volElem) {

  SU2_MPI::Error(string("Not implemented yet"), CURRENT_FUNCTION);
}
