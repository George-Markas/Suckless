static const char *colorname[] = {
    /* 8 normal colors */
    "#191e2a", /* black   */
    "#ed8274", /* red     */
    "#a6cc70", /* green   */
    "#fad07b", /* yellow  */
    "#6dcbfa", /* blue    */
    "#cfbafa", /* magenta */
    "#90e1c6", /* cyan    */
    "#c7c7c7", /* white   */
    
    /* 8 bright colors */
    "#686868", /* black   */
    "#f28779", /* red     */
    "#bae67e", /* green   */
    "#ffd580", /* yellow  */
    "#73d0ff", /* blue    */
    "#d4bfff", /* magenta */
    "#95e6cb", /* cyan    */
    "#ffffff", /* white   */

    [255] = 0,

    "#d9d7ce", /* foreground */
    "#212733"  /* background */
};

unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
