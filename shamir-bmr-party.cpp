/*
 * shamir-bmr-party.cpp
 *
 */

#include "Machines/ShamirMachine.cpp"

#include "BMR/RealProgramParty.hpp"

int main(int argc, const char** argv)
{
	ShamirMachine machine(argc, argv);
	RealProgramParty<ShamirShare<gf2n_long>>(argc, argv);
}
