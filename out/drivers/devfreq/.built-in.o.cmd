cmd_drivers/devfreq/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o drivers/devfreq/built-in.o drivers/devfreq/devfreq.o drivers/devfreq/governor_simpleondemand.o drivers/devfreq/governor_performance.o drivers/devfreq/governor_powersave.o drivers/devfreq/governor_userspace.o drivers/devfreq/governor_msm_adreno_tz.o drivers/devfreq/governor_cpufreq.o drivers/devfreq/bimc-bwmon.o drivers/devfreq/adreno_idler.o drivers/devfreq/arm-memlat-mon.o drivers/devfreq/governor_bw_hwmon.o drivers/devfreq/governor_spdm_bw_hyp.o drivers/devfreq/governor_gpubw_mon.o drivers/devfreq/governor_bw_vbif.o drivers/devfreq/governor_memlat.o drivers/devfreq/devfreq_devbw.o drivers/devfreq/devfreq_spdm.o drivers/devfreq/devfreq_spdm_debugfs.o ; scripts/mod/modpost drivers/devfreq/built-in.o
