cmd_drivers/regulator/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o drivers/regulator/built-in.o drivers/regulator/core.o drivers/regulator/dummy.o drivers/regulator/fixed-helper.o drivers/regulator/helpers.o drivers/regulator/devres.o drivers/regulator/of_regulator.o drivers/regulator/fixed.o drivers/regulator/msm_gfx_ldo.o drivers/regulator/proxy-consumer.o drivers/regulator/mem-acc-regulator.o drivers/regulator/rpm-smd-regulator.o drivers/regulator/qpnp-regulator.o drivers/regulator/spm-regulator.o drivers/regulator/cpr3-regulator.o drivers/regulator/cpr3-util.o drivers/regulator/cpr3-hmss-regulator.o drivers/regulator/cpr3-mmss-regulator.o drivers/regulator/cprh-kbss-regulator.o drivers/regulator/cpr4-mmss-ldo-regulator.o drivers/regulator/qpnp-labibb-regulator.o drivers/regulator/qpnp-lcdb-regulator.o drivers/regulator/qpnp-oledb-regulator.o drivers/regulator/stub-regulator.o ; scripts/mod/modpost drivers/regulator/built-in.o
