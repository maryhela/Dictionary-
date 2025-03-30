#include <iostream>
#include <string>
#include <cctype> // Required for toupper()

int main() {
    std::string term;
    
    while (true) {
        std::cout << "\nEnter an engineering term (or type 'EXIT' to quit): ";
        std::getline(std::cin, term);

        // Convert input to uppercase
        for (char &c : term) {
            c = std::toupper(c);
        }

        // Exit condition
        if (term == "EXIT") {
            std::cout << "Exiting the program. Goodbye!" << std::endl;
            break;
        }

        // Check for the term and print the definition
        if (term == "FORCE") {
            std::cout << "A push or pull upon an object resulting from its interaction with another object." << std::endl;
        } else if (term == "TORQUE") {
            std::cout << "A measure of the force that causes an object to rotate around an axis." << std::endl;
        } else if (term == "STRESS") {
            std::cout << "The force per unit area applied to a material." << std::endl;
        } else if (term == "STRAIN") {
            std::cout << "The deformation of a material due to applied stress." << std::endl;
        } else if (term == "BEAM") {
            std::cout << "A structural element that primarily resists bending." << std::endl;
        } else if (term == "CONCRETE") {
            std::cout << "A composite material composed of fine and coarse aggregates bonded with cement." << std::endl;
        } else if (term == "LOAD") {
            std::cout << "The weight or force that is applied to a structure." << std::endl;
        } else if (term == "SHEAR") {
            std::cout << "A force that causes parts of a material to slide past each other." << std::endl;
        } else if (term == "TORSION") {
            std::cout << "Twisting of an object due to an applied torque." << std::endl;
        } else if (term == "COMPRESSION") {
            std::cout << "A force that reduces the volume or length of a material." << std::endl;
        } else if (term == "TENSION") {
            std::cout << "A force that pulls or stretches a material." << std::endl;
        } else if (term == "ELASTICITY") {
            std::cout << "The ability of a material to return to its original shape after deformation." << std::endl;
        } else if (term == "PLASTICITY") {
            std::cout << "The ability of a material to permanently deform without breaking." << std::endl;
        } else if (term == "DUCTILITY") {
            std::cout << "The ability of a material to stretch without breaking." << std::endl;
        } else if (term == "BRITTLENESS") {
            std::cout << "The tendency of a material to break or shatter under stress." << std::endl;
        } else if (term == "FATIGUE") {
            std::cout << "The weakening of a material due to repeated stress cycles." << std::endl;
        } else if (term == "HARDNESS") {
            std::cout << "A material’s resistance to deformation, scratching, or indentation." << std::endl;
        } else if (term == "YIELD STRENGTH") {
            std::cout << "The stress at which a material begins to deform permanently." << std::endl;
        } else if (term == "ULTIMATE STRENGTH") {
            std::cout << "The maximum stress a material can withstand before failure." << std::endl;
        } else if (term == "YOUNG'S MODULUS") {
            std::cout << "A measure of the stiffness of a material." << std::endl;
        } else if (term == "POISSON'S RATIO") {
            std::cout << "The ratio of lateral strain to axial strain in a material." << std::endl;
        } else if (term == "DENSITY") {
            std::cout << "The mass per unit volume of a material." << std::endl;
        } else if (term == "BUOYANCY") {
            std::cout << "The upward force exerted by a fluid on a submerged object." << std::endl;
        } else if (term == "VISCOSITY") {
            std::cout << "A measure of a fluid’s resistance to flow." << std::endl;
        } else if (term == "HYDROSTATICS") {
            std::cout << "The study of fluids at rest and the forces exerted by or upon them." << std::endl;
        } else {
            std::cout << "Definition not available for the entered term." << std::endl;
        }
    }

    return 0;
}