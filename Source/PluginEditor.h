/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Linear_vs_logarithmic_sliderAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    Linear_vs_logarithmic_sliderAudioProcessorEditor (Linear_vs_logarithmic_sliderAudioProcessor&);
    ~Linear_vs_logarithmic_sliderAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Linear_vs_logarithmic_sliderAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Linear_vs_logarithmic_sliderAudioProcessorEditor)
};
