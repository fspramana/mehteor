#ifndef MEH_SOUND_H
#define MEH_SOUND_H

#include <vector>
#include <string>
#ifdef __APPLE__
    #include <OpenAL/al.h>
    #include <OpenAL/alc.h>
#else
    #include <AL/al.h>
    #include <AL/alc.h>
#endif

using namespace std;

namespace meh
{

class Sound 
{
    private:
        vector<char> dta;
        ALenum frmat;
        ALsizei freq;
        /**
         * Duration of this Sound (in ms)
         */
        unsigned int dration;

        void loadOgg(string filename);

    protected:
    public:
        Sound(string filename);
        ~Sound();

        vector<char>& getData()
        {
            return dta;
        }

        ALenum getFormat()
        {
            return frmat;
        }

        ALsizei getFrequency()
        {
            return freq;
        }

        /**
         * Returns the duration of this Sound (in ms).
         * @return the duration of this Sound (in ms).
         */
        unsigned int getDuration()
        {
            return dration;
        }
};

} // namespace meh 

#endif // MEH_SOUND_H
