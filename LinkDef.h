#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ nestedclass;
#pragma link C++ nestedtypedef;

#pragma link C++ namespace genfit;

// core
#pragma link C++ class genfit::AbsFinitePlane+;
#pragma link C++ class genfit::AbsHMatrix+;
#pragma link C++ class genfit::RectangularFinitePlane+;
#pragma link C++ class genfit::FitStatus+;
#pragma link C++ class genfit::Material+;
#pragma link C++ class genfit::PruneFlags+;
#pragma link C++ class genfit::TrackCand+;
#pragma link C++ class genfit::TrackCandHit+;
#pragma link C++ class genfit::SharedPlanePtrCreator-;
#pragma link C++ class genfit::AbsTrackRep+;
#pragma link C++ class genfit::MeasuredStateOnPlane+;
#pragma link C++ class genfit::AbsMeasurement+;
#pragma link C++ class genfit::AbsFitterInfo-;
#pragma link C++ class genfit::DetPlane-;
#pragma link C++ class genfit::MeasurementOnPlane-;
#pragma link C++ class genfit::StateOnPlane-;
#pragma link C++ class genfit::ThinScatterer-;
#pragma link C++ class genfit::Track-;
#pragma link C++ class genfit::TrackPoint-;
#pragma link C++ class vector<genfit::TrackPoint*>-;

// Schema evolution rules (core)
#pragma read sourceClass="genfit::FitStatus" version="[1]" \
  targetClass="genfit::FitStatus"                          \
  source="bool trackIsPruned_;" target="pruneFlags_"       \
  code="{ pruneFlags_.setFlags(); }"
#pragma read sourceClass="genfit::FitStatus" version="[2]" \
  targetClass="genfit::FitStatus"                          \
  source="" target="pruneFlags_"                           \
  code="{ pruneFlags_.setFlags(); }"
#pragma read sourceClass="genfit::TrackCand" version="[1]" \
  targetClass="genfit::TrackCand"                          \
  source="" target="time_"                                 \
  code="{ time_ = 0; }"

// eventDisplay
#pragma link C++ class genfit::EventDisplay+;

// fitters
#pragma link C++ class genfit::AbsKalmanFitter+;
#pragma link C++ class genfit::KalmanFitStatus;
#pragma link C++ class genfit::KalmanFitterRefTrack+;
#pragma link C++ class genfit::KalmanFittedStateOnPlane+;
#pragma link C++ class genfit::ReferenceStateOnPlane+;
#pragma link C++ class genfit::KalmanFitter-;
#pragma link C++ class genfit::KalmanFitterInfo-;
#pragma link C++ class genfit::DAF-;

// GBL
#pragma link C++ namespace gbl;
#pragma link C++ class genfit::GFGbl+;
#pragma link C++ class genfit::GblFitter+;
#pragma link C++ class genfit::GblFitter2+;
#pragma link C++ class genfit::ICalibrationParametersDerivatives+;
#pragma link C++ class genfit::GblFitStatus+;
#pragma link C++ class genfit::GblFitterInfo+;
#pragma link C++ class genfit::GblFitterInfo2+;
#pragma link C++ class genfit::GblTrackSegmentController+;
#pragma link C++ class gbl::GblData+;
#pragma link C++ class vector<gbl::GblData>+;

// measurements
#pragma link C++ class genfit::HMatrixU+;
#pragma link C++ class genfit::HMatrixUnit+;
#pragma link C++ class genfit::HMatrixV+;
#pragma link C++ class genfit::HMatrixUV+;
#pragma link C++ class genfit::ProlateSpacepointMeasurement+;
#pragma link C++ class genfit::WireMeasurement+;
#pragma link C++ class genfit::WireMeasurementNew+;
#pragma link C++ class genfit::WirePointMeasurement+;
#pragma link C++ class genfit::HMatrixPhi-;
#pragma link C++ class genfit::FullMeasurement-;
#pragma link C++ class genfit::PlanarMeasurement-;
#pragma link C++ class genfit::SpacepointMeasurement-;
#pragma link C++ class genfit::WireTrackCandHit+;

// trackReps
#pragma link C++ class genfit::RKTrackRep-;
#pragma link C++ class genfit::MplTrackRep-;

// utilities
#pragma link C++ class genfit::HelixTrackModel+;
#pragma link C++ class genfit::MeasurementCreator+;
#pragma link C++ class genfit::mySpacepointDetectorHit+;
#pragma link C++ class genfit::mySpacepointMeasurement+;

// GFRave (only active when RAVE support is compiled in)
#pragma link C++ class genfit::GFRaveVertex+;
#pragma link C++ class genfit::GFRaveTrackParameters+;
