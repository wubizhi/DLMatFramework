#ifndef SGDMOMENTUM_H
#define SGDMOMENTUM_H
#include "baseoptimizer.h"

template <typename T>
class SGDMomentum : public BaseOptimizer<T>
{
public:
    SGDMomentum();
    Tensor<T> Optimize(const Tensor<T> &params, const Tensor<T> &grad_params, const OptimizerState<T> &state) override;
};

#endif // SGDMOMENTUM_H
