#include <onnxruntime_cxx_api.h>

#ifndef ONNXLIB_H
#define ONNXLIB_H

// This is a stub for some ONNX code refactoring

std::vector<float> onnxCombo(std::string &modelfile, std::vector<float> &input, int N);

Ort::Session* onnxSession(std::string &modelfile);

std::vector<float> onnxInference(Ort::Session* session, std::vector<float> &input, int N);

#endif
