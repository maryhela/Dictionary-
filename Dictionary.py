# Engineering Dictionary

DATA = {
    "FORCE": "A push or pull upon an object resulting from its interaction with another object.",
    "TORQUE": "A measure of the force that causes an object to rotate around an axis.",
    "STRESS": "The force per unit area applied to a material.",
    "STRAIN": "The deformation of a material due to applied stress.",
    "BEAM": "A structural element that primarily resists bending.",
    "CONCRETE": "A composite material composed of fine and coarse aggregates bonded with cement.",
    "LOAD": "The weight or force that is applied to a structure.",
    "SHEAR": "A force that causes parts of a material to slide past each other.",
    "TORSION": "Twisting of an object due to an applied torque.",
    "COMPRESSION": "A force that reduces the volume or length of a material.",
    "TENSION": "A force that pulls or stretches a material.",
    "ELASTICITY": "The ability of a material to return to its original shape after deformation.",
    "PLASTICITY": "The ability of a material to permanently deform without breaking.",
    "DUCTILITY": "The ability of a material to stretch without breaking.",
    "BRITTLENESS": "The tendency of a material to break or shatter under stress.",
    "FATIGUE": "The weakening of a material due to repeated stress cycles.",
    "HARDNESS": "A material’s resistance to deformation, scratching, or indentation.",
    "YIELD STRENGTH": "The stress at which a material begins to deform permanently.",
    "ULTIMATE STRENGTH": "The maximum stress a material can withstand before failure.",
    "YOUNG'S MODULUS": "A measure of the stiffness of a material.",
    "POISSON'S RATIO": "The ratio of lateral strain to axial strain in a material.",
    "DENSITY": "The mass per unit volume of a material.",
    "BUOYANCY": "The upward force exerted by a fluid on a submerged object.",
    "VISCOSITY": "A measure of a fluid’s resistance to flow.",
    "HYDROSTATICS": "The study of fluids at rest.",
    "KINEMATICS": "The study of motion without considering forces.",
    "DYNAMICS": "The study of motion and the forces that cause it.",
    "EQUILIBRIUM": "A state in which all forces acting on a body are balanced.",
    "MOMENT": "The tendency of a force to cause rotation.",
    "WORK": "The energy transferred when a force moves an object over a distance."
}

# User input to search for a term
a = input("Enter an engineering term: ").upper()

# Print the definition if found, otherwise show a not found message
print(DATA.get(a, "Term not found."))
