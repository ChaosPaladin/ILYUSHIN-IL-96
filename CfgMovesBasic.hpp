class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		pilot="pilot";
		commander="commander";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class pilot_dead: DefaultDie
		{
			actions="DeadActions";
			speed=0.5;
			looped="false";
			terminal=1;
			file="\ILYUSHIN-IL-96\anim\kia.rtm";
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class pilot: Crew
		{
			file="\ILYUSHIN-IL-96\anim\pilot.rtm";
			interpolateTo[]=
			{
				"pilot_dead",
				1
			};
		};
		class commander: Crew
		{
			file="\ILYUSHIN-IL-96\anim\commander.rtm";
			interpolateTo[]=
			{
				"pilot_dead",
				1
			};
		};
	};
};
