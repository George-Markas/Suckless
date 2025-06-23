static const char normbgcolor[]     = "#1f2430";
static const char normfgcolor[]     = "#cccac2";
static const char normbordercolor[] = "#1f2430";
static const char selbgcolor[]      = "#333c50";
static const char selfgcolor[]      = "#cccac2";
static const char selbordercolor[]  = "#f28779";

static const char *colors[][3]      = {
    /*                   fg              bg           border   */
    [SchemeNorm]     = { normfgcolor,    normbgcolor, normbordercolor },
    [SchemeSel]      = { selfgcolor,     selbgcolor,  selbordercolor  },
    [SchemeStatus]   = { normfgcolor,    normbgcolor, "#000000"       },
    [SchemeTagsSel]  = { selbordercolor, selbgcolor,  "#000000"       },
    [SchemeTagsNorm] = { normfgcolor,    normbgcolor, "#000000"       },
    [SchemeInfoSel]  = { selfgcolor,     selbgcolor,  "#000000"       },
    [SchemeInfoNorm] = { normfgcolor,    normbgcolor, "#000000"       },
};
