#pragma once
#include "Interfaces/ITimer.h"

namespace HawtLib {
	namespace HawtProfiling {
		class RAIITimer : ITimer {
		private:
			std::chrono::time_point<std::chrono::high_resolution_clock> startTime;
			float* duration;
		public:			
			// no copy
			RAIITimer(const RAIITimer&) = delete;	
			RAIITimer operator=(const RAIITimer&) = delete;

		private:
			inline void _Start() noexcept override;

			inline void _Stop() noexcept override;
		public:
			RAIITimer(float* outDuration);
			~RAIITimer();
		};
	}
}