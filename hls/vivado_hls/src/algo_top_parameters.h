/**
 * algo_top_parameters.h
 *
 * Defines the algorithm related configuration parameters.
 */

#ifndef __ALGO_TOP_PARAMETERS_H__
#define __ALGO_TOP_PARAMETERS_H__

/** Common algorithm definitions, do not remove **/
// Un-comment to have algo as a passthrough for testing purposes
//#define ALGO_PASSTHROUGH

// Number of data words per processing cycle/frame
const int N_WORDS_PER_FRAME	= 9;

/** Algorithm specific parameters **/
#define TOWERS_IN_ETA 6
#define TOWERS_IN_PHI 4

/** More common algorithm definitions, do not remove **/
// N_INPUT_LINKS and N_OUTPUT_LINKS need to be numerically specified so that wrapper generators work.
#define N_INPUT_LINKS	24
#define N_OUTPUT_LINKS	2

#define N_INPUT_WORDS_PER_FRAME 6	// 16G inputs
#define N_OUTPUT_WORDS_PER_FRAME 9	// 25G outputs


#endif /* !__ALGO_TOP_PARAMETERS_H__ */
