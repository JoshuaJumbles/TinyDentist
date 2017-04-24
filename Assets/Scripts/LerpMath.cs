using UnityEngine;
using System.Collections;

public enum LerpStyle{
	None,
	InOutCubic,
	EaseIn,
	EaseOut,

	InCubic,
	OutCubic,

	OutQuartic,

	InQuintic,
	OutQuintic,

	Bounce1,
	Bounce2,
	Bounce3,
	Bounce4
}

public class LerpMath{
	public static float ModifyTimeWithStyle(LerpStyle style, float t){
		var res = t;
		var b = 0f;
		var c = 1f;
		var d = 1f;
		float ts, tc;



		switch (style) {
		case LerpStyle.None:
			break;
		case LerpStyle.EaseIn:
			break;
		case LerpStyle.EaseOut:
			break;
		case LerpStyle.InOutCubic:
			ts=(t/=d)*t;
			tc=ts*t;
			return b+c*(-2*tc + 3*ts);
			break;
		case LerpStyle.InCubic:
			tc=(t/=d)*t*t;
			return b+c*(tc);

		case LerpStyle.OutCubic:
			ts=(t/=d)*t;
			tc=ts*t;
			return b+c*(tc + -3*ts + 3*t);

		case LerpStyle.OutQuartic:
			ts = (t /= d) * t;
			tc = ts * t;
			return b + c * (-1.77635683940025e-15f * tc * ts + -1f * ts * ts + 4f * tc + -6f * ts + 4f * t);
		case LerpStyle.InQuintic:
			ts = (t /= d) * t;
			tc = ts * t;
			return b + c * (tc * ts);
		case LerpStyle.OutQuintic:
			ts=(t/=d)*t;
			tc=ts*t;
			return b+c*(tc*ts + -5*ts*ts + 10*tc + -10*ts + 5*t);
		case LerpStyle.Bounce1:
			ts = (t /= d) * t;
			tc = ts * t;
			return b + c * (-20.4925f * tc * ts + 58.9325f * ts * ts + -63.585f * tc + 29.095f * ts + -2.95f * t);
		case LerpStyle.Bounce2:
			ts = (t /= d) * t;
			tc = ts * t;
			return b + c * (-12.195f * tc * ts + 50.635f * ts * ts + -63.585f * tc + 29.095f * ts + -2.95f * t);
		case LerpStyle.Bounce3:
			ts = (t /= d) * t;
			tc = ts * t;
			return b + c * (44.4925f * tc * ts + -122.08f * ts * ts + 120.88f * tc + -52.69f * ts + 10.3975f * t);

		}

		return res;
	}
}
