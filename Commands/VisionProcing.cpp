/*#include "VisionProcing.h"
#include "Center.h"
#include <math.h>


bool VisionProcing::isHighTarget = true;

VisionProcing::VisionProcing() {
	AddSequential(new Center());
}

Proccessed VisionProcing::VisionProccess(){

	static const double h = 0.765;//true
	static const double alpha = 0.28797933;//radians  - true
	static const double beta = 0.82030475;//radians - true //view angle

	Proccessed errProc;
	errProc.Distance = errProc.x_normilized = -100.0;
	SmartDashboard::PutString("Debug1", "Got Here");
	
	ColorImage* image = new ColorImage(IMAQ_IMAGE_HSL);
	VisionProcing::camera->GetImage(image);
	if(image == NULL)
	{
		SmartDashboard::PutString("Debug2", "NullRefrenceException");
		return errProc;
	}
	BinaryImage* binImage = image->ThresholdHSL(36,165,0,86,134,255);
	binImage->ConvexHull(false);
	vector<ParticleAnalysisReport>* reps = binImage->GetOrderedParticleAnalysisReports();
	SmartDashboard::PutNumber("Objects found", reps->size());
	if(reps->size() <= 0)
	{
		SmartDashboard::PutString("Debug4", "no objects at all!");
		return errProc;
	}

	ParticleAnalysisReport* preferred = &reps->at(0);

	for(unsigned int i = 0; i < reps->size(); i++)
	{
		ParticleAnalysisReport* curr = &reps->at(i);
		if(curr->particleArea > 2000 && fabs(curr->center_mass_x_normalized) < fabs(preferred->center_mass_x_normalized))
		{
			preferred = curr;
		}
	}

	SmartDashboard::PutNumber("Debug5", preferred->center_mass_y_normalized);
	double ratio = 2.0/(1+preferred->center_mass_y_normalized)-1;
	SmartDashboard::PutString("Current Target", VisionProcing::isHighTarget ? "HIGH" : "MIDDLE");
	double H;
	double W;
	if(VisionProcing::isHighTarget)//high - true
	{
		H = 2.644775;
		W = 0.1524;
	}
	else//Middle - true
	{
		H = 2.251075;
		W = 0.2667;
	}
	

	float d = -((h - H - W)*(1+ 1/ratio))/(1/tan(alpha) + 1/(tan(beta + alpha)*ratio));
	SmartDashboard::PutNumber("Distance", d);
	Proccessed procd;
	procd.x_normilized = preferred->center_mass_x_normalized;
	procd.Distance = d;
	delete reps;
	delete binImage;
	delete image;
	
	return procd;
}
AxisCamera* VisionProcing::camera = NULL;
void VisionProcing::Init()
{
	VisionProcing::camera = &AxisCamera::GetInstance("10.47.57.11");
}
*/
