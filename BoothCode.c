#pragma config(Motor,  port2,           sm1,           tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port3,           sm2,           tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port4,           lm1,           tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port5,           lm2,           tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port6,           svo1,          tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port7,           svo2,          tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port8,           svo3,          tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port9,           svo4,          tmotorServoContinuousRotation, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int Svo1pos;
	int Svo2pos;
	int Svo3pos;
	int Svo4pos;

	Svo1pos = -127;
	Svo2pos = -127;
	Svo3pos = -127;
	Svo4pos = -127;

while(1==1)
	{
		motor[sm1] = vexRT[Ch3];
		motor[sm2] = vexRT[Ch2];
		motor[lm1] = vexRT[Ch4];
		motor[lm2] = vexRT[Ch1];

		if(vexRT[Btn8L]==1)
			{
				Svo1pos -= 40;
				motor[svo1] = Svo1pos;
				wait1Msec(200);
			}
				else
				{
					if(vexRT[Btn7L]==1)
						{
							Svo1pos += 40;
							motor[svo1] = Svo1pos;
							wait1Msec(200)
						}
				}
		if(vexRT[Btn8U]==1)
			{
				Svo2pos -= 40;
				motor[svo2] = Svo1pos;
				wait1Msec(200);
			}
				else
				{
					if(vexRT[Btn7U]==1)
						{
							Svo2pos += 40;
							motor[svo2] = Svo2pos;
							wait1Msec(200)
						}
				}
		if(vexRT[Btn8D]==1)
			{
				Svo3pos -= 40 ;
				motor[svo3] = 127;
				wait1Msec(200);
			}
				else
				{
					if(vexRT[Btn7D]==1)
						{
							Svo3pos += 40;
							motor[svo3] = Svo3pos;
							wait1Msec(200)
						}
				}
		if(vexRT[Btn8R]==1)
			{
				Svo4pos -= 40;
				motor[svo4] = 127;
				wait1Msec(200);
			}
				else
				{
					if(vexRT[Btn7R]==1)
						{
							Svo4pos += 40;
							motor[svo4] = Svo4pos;
							wait1Msec(200)
						}
				}

		while((vexRT[Btn5D]==1)&& (vexRT[Btn6D]==1))
			{

				motor[sm1] = 127;
				motor[sm2] = 127;
				motor[lm1] = 127;
				motor[lm2] = 127;

				motor[svo1] = -127;
				motor[svo2] = -127;
				motor[svo3] = -127;
				motor[svo4] = -127;
	wait1Msec(500);
				motor[svo1] = 127;
				motor[svo2] = 127;
				motor[svo3] = 127;
				motor[svo4] = 127;



			}
	}
}
