cmd_drivers/clk/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o drivers/clk/built-in.o drivers/clk/clk-devres.o drivers/clk/clkdev.o drivers/clk/clk.o drivers/clk/clk-divider.o drivers/clk/clk-fixed-factor.o drivers/clk/clk-fixed-rate.o drivers/clk/clk-gate.o drivers/clk/clk-multiplier.o drivers/clk/clk-mux.o drivers/clk/clk-composite.o drivers/clk/clk-fractional-divider.o drivers/clk/clk-gpio.o drivers/clk/clk-conf.o drivers/clk/clk-xgene.o drivers/clk/bcm/built-in.o drivers/clk/qcom/built-in.o drivers/clk/msm/built-in.o ; scripts/mod/modpost drivers/clk/built-in.o
