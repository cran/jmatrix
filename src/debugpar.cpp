/*
 *
 * Copyright (C) 2022 Juan Domingo (Juan.Domingo@uv.es)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <debugpar.h>

// This is the only place where this variable is declared. It is global for the full package and should only be changed by JMatrixSetDebug
unsigned char DEB=0;

// These directives must appear in the NAMESPACE
//' @importFrom memuse Sys.meminfo Sys.swapinfo

//' JMatrixSetDebug
//'
//' Sets debugging in jmatrix package to ON (with TRUE) or OFF (with FALSE).\cr
//' On package load the default status is OFF.\cr
//' Setting debugging to ON shows a message. Setting to OFF does not show anything (since debugging is OFF...)
//'
//' @param deb   boolean, TRUE to generate debug messages and FALSE to turn them off. Default: true
//' @return      No return value, called for side effects (internal boolean flag changed)
//' @examples
//' JMatrixSetDebug(TRUE)
//' JMatrixSetDebug(FALSE)
//' @export
// [[Rcpp::export]]
void JMatrixSetDebug(bool deb = true)
{
 if (deb)
 {
  DEB |= DEBJM;
  Rcpp::Rcout << "Debugging for jmatrix package set to ON.\n";
 }
 else
  DEB &= (~DEBJM);
}

