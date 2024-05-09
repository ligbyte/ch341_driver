obj-m +=ch341.o

KERNELDIR :=/home/lime/work/RK3399-Android8.1/kernel
PWD ?=$(shell pwd)
default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

clean:
	rm -rf *.mk .tmp_versions Module.symvers *.mod.c *.o *.ko .*.cmd Module.markers modules.order *.a *.mod out

