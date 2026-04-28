#
# Build definition for the dav1d tools
#

# Configuratin data for cli_config.h
cli_cdata = configuration_data()

# dav1d cli tool sources
script_sources = files('dct_diff.c', '../src/itx_tmpl.c')
dav1d_rc_obj = []

dav1d = executable('dct_diff',
    script_sources,
    dav1d_rc_obj,
    rev_target, config_h_target,
    c_args : ['-DBITDEPTH=8'],
    link_with : [libdav1d],
    include_directories : [dav1d_inc_dirs],
    dependencies : [
        getopt_dependency,
        thread_dependency,
        rt_dependency,
        libm_dependency,
        ],
    install : true,
)
