/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
Linear_vs_logarithmic_sliderAudioProcessorEditor::Linear_vs_logarithmic_sliderAudioProcessorEditor (Linear_vs_logarithmic_sliderAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (200, 200);
    
    midiVolume.setSliderStyle(Slider::LinearBarVertical);
    midiVolume.setRange(0.0, 127.0, 1.0);
    midiVolume.setTextBoxStyle(Slider::NoTextBox, false, 90, 0);
    midiVolume.setPopupDisplayEnabled(true, false, this);
    midiVolume.setTextValueSuffix(" Volume");
    midiVolume.setValue(1.0);
    
    addAndMakeVisible(&midiVolume);
}

Linear_vs_logarithmic_sliderAudioProcessorEditor::~Linear_vs_logarithmic_sliderAudioProcessorEditor()
{
}

//==============================================================================
void Linear_vs_logarithmic_sliderAudioProcessorEditor::paint (Graphics& g)
{
    g.drawFittedText ("MIDI Volume", getLocalBounds(), Justification::centred, 1);

    g.fillAll (Colours::white);

    g.setColour (Colours::black);
    g.setFont (15.0f);
}

void Linear_vs_logarithmic_sliderAudioProcessorEditor::resized()
{
    midiVolume.setBounds (40, 30, 20, getHeight() - 60);
}
