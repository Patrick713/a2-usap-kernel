cmd_drivers/media/common/videobuf2/videobuf2-vmalloc.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/media/common/videobuf2/videobuf2-vmalloc.ko drivers/media/common/videobuf2/videobuf2-vmalloc.o drivers/media/common/videobuf2/videobuf2-vmalloc.mod.o;  true