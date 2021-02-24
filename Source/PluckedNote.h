/*
 ==============================================================================
 
 PluckedNote.h
 Created: 23 Feb 2021 6:04:44pm
 Author:  csmit
 
 ==============================================================================
 */

#pragma once

#include <tgmath.h>
#include <JuceHeader.h>

/// <#Description#>
class PluckedNote
{
public:    
    PluckedNote();
    ~PluckedNote();
    
    //=============================================================================
    /// <#Description#>
    void generateNote();
    /// <#Description#>
    float process();
    //=============================================================================
#pragma mark getters and setters
    
    /// <#Description#>
    /// @param freq <#freq description#>
    void setFrequency(float freq);
    /// <#Description#>
    /// @param SR <#SR description#>
    void setSampleRate(float SR);
    /// <#Description#>
    /// @param noteLength <#noteLength description#>
    void setNoteLength(float noteLength);
    
private:
    /// frequency of plucked note variable
    float frequency = 440.0f;
    /// stored sample rate
    float sampleRate = 48000.0f;
    /// dynamic parameter
    float dynParam = 0.95f;
    /// length of note in seconds
    float T60 = 2.0f;
    /// initialize phase
    float phase = 0.0f;
    /// storing note data
    juce::Array<float> waveTable;
    /// length in samples
    float wtSize = floor(sampleRate * T60);
};