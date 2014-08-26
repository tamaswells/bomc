/*
BOMC - Monte Carlo based generator of defect-free amorphous samples of Si and SiO2

If you publish research done using Bomc then you are kindly asked to cite: 
 S. von Alfthan, A. Kuronen, and K. Kaski, Phys. Rev. B 68, 073203 (2003).


Copyright Sebastian von Alfthan  galfthan@iki.fi 2002, 2003, 2014.


 This file is part of Bomc.	 

Bomc is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation, either version 3 of the License, or (at your
option) any later version.  

Bomc is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with Bomc.  If not, see <http://www.gnu.org/licenses/>.
*/


/*internal structures and defines*/
struct simuPar{
  int checkBulkmodulus;
  int checkPotential;
  int calculateDynMatrix;
  int breakRings;

  int randIter;
  int resultPeriod;
  
  double volProb;
  double volStartkT;
   
  int createBonds;				  /* if not we excpect that they are read in... */
  double bondCreationR0;

  double bondSwitchProb;
  double bondDiffuseProb;
  double oxDiffuseProb;
  double bondCreateProb;
  double bondBreakProb;
};

int mcSimulation(struct systemPos pos,struct parameters *par,struct simuPar *simuPar,struct fileIo *fio);
int prepareInitialSystem(struct systemPos pos,struct parameters *par,struct simuPar *simuPar);
