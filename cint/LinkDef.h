#ifdef __CINT__

// General preamble

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ nestedclass;
#pragma link C++ nestedtypedef;

// namespaces

#pragma link C++ namespace erhic;
#pragma link C++ namespace Smear;

// Functions

#pragma link C++ function BuildTree;
#pragma link C++ function SmearTree;
#pragma link C++ function Smear::ParseInputFunction;

// Particle classes

#pragma link C++ class erhic::VirtualParticle+;
#pragma link C++ class erhic::ParticleMC+;
#pragma link C++ class Smear::ParticleMCS+;

// Base event classes

#pragma link C++ class erhic::VirtualEvent+;
#pragma link C++ class erhic::EventMC+;
#pragma link C++ class erhic::VirtualEvent+;
#pragma link C++ class Smear::Event+;
#pragma link C++ class erhic::EventDis+;

// Event classes for individual generators

#pragma link C++ class erhic::EventPythia+;
#pragma link C++ class erhic::EventRapgap+;
#pragma link C++ class erhic::EventPepsi+;
#pragma link C++ class erhic::EventDjangoh+;
#pragma link C++ class erhic::EventDpmjet+;
#pragma link C++ class erhic::EventMilou+;

// Event building

#pragma link C++ class erhic::VirtualEventFactory+;
#pragma link C++ class erhic::EventFromAsciiFactory<erhic::EventPepsi>+;
#pragma link C++ class erhic::EventFromAsciiFactory<erhic::EventMilou>+;
#pragma link C++ class erhic::EventFromAsciiFactory<erhic::EventRapgap>+;
#pragma link C++ class erhic::EventFromAsciiFactory<erhic::EventDjangoh>+;
#pragma link C++ class erhic::EventFromAsciiFactory<erhic::EventDpmjet>+;
#pragma link C++ class erhic::EventFromAsciiFactory<erhic::EventPythia>+;
#pragma link C++ class erhic::Pythia6EventBuilder+;
#pragma link C++ class erhic::EventMCFilterABC+;
#pragma link C++ class erhic::Pythia6+;

// Tree and file building

#pragma link C++ class erhic::Forester+;
#pragma link C++ class erhic::Forester::Status+;

// Core smearing components

#pragma link C++ class Smear::Acceptance+;
#pragma link C++ class Smear::Acceptance::CustomCut+;
#pragma link C++ class Smear::Acceptance::Zone+;
#pragma link C++ class Smear::Smearer+;
#pragma link C++ class Smear::Device+;
#pragma link C++ class Smear::ParamSimple+;
#pragma link C++ class Smear::Detector+;
#pragma link C++ class Smear::Distributor+;
#pragma link C++ class Smear::ParticleID+;

// Specialized smearing devices

#pragma link C++ class Smear::Devious+;
#pragma link C++ class Smear::Tracker+;
#pragma link C++ Class Smear::EMCalorimeter+;
#pragma link C++ class Smear::HCalorimeter+;
#pragma link C++ class Smear::Bremsstrahlung+;

// Monte carlo log file processing

#pragma link C++ class erhic::LogReader+;
#pragma link C++ class erhic::LogReaderPythia+;
#pragma link C++ class erhic::LogReaderPepsi+;
#pragma link C++ class erhic::LogReaderDjangoh+;
#pragma link C++ class erhic::LogReaderMilou+;
#pragma link C++ class erhic::LogReaderFactory;

// Monte carlo file type information

#pragma link C++ class erhic::FileType+;
#pragma link C++ class erhic::File<erhic::EventPythia>+;
#pragma link C++ class erhic::File<erhic::EventMilou>+;
#pragma link C++ class erhic::File<erhic::EventPepsi>+;
#pragma link C++ class erhic::File<erhic::EventRapgap>+;
#pragma link C++ class erhic::File<erhic::EventDjangoh>+;
#pragma link C++ class erhic::File<erhic::EventDpmjet>+;
#pragma link C++ class erhic::FileFactory;

// Specialised stl templates

#pragma link C++ class std::vector<Particle>+;
#pragma link C++ class std::vector<Particle*>+;
#pragma link C++ class std::vector<const Particle*>+;
#pragma link C++ class std::vector<const erhic::VirtualParticle*>+;
#pragma link C++ class std::auto_ptr<erhic::Pid>;

// typedefs
#pragma link C++ class EventS;
#pragma link C++ class ParticleS;

// Miscellaneous utilities and helper functions/functors

#pragma link C++ class erhic::Kinematics+;
#pragma link C++ class erhic::DisKinematics+;
#pragma link C++ class BeamParticles+;
#pragma link C++ class DoubleAngle+;
#pragma link C++ class EventToDot;
#pragma link C++ class erhic::Pid+;
#pragma link C++ class erhic::Reader+;
#pragma link C++ class KinematicsFromHadrons+;
#pragma link C++ class JacquetBlondel+;
#pragma link C++ class erhic::KinematicsComputer+;
#pragma link C++ class erhic::LeptonKinematicsComputer+;
#pragma link C++ class erhic::JacquetBlondelComputer+;
#pragma link C++ class erhic::DoubleAngleComputer+;
#pragma link C++ class ParticleIdentifier+;

#endif
