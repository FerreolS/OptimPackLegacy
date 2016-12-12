* Means to force a restart of VMLMB (the parameter `costheta` is not used).

* Check Zoutendijk condition (this is the same as above).

* Backtrack (using Armijo's rule) when at least one bound constraint becomes
  active along the line search.

* Implement damped BFGS updating, see Nocédal & Wright p. 537.

* Scale initial gradient.  Perhaps use a typical value for the step norm

* Improve convergence test.

* Change API: use a structure for the workspace or a single array.

* Doxygen documentation.

* Safeguard the step.

* Implement BLMVM.
