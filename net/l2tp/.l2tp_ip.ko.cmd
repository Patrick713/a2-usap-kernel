cmd_net/l2tp/l2tp_ip.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/l2tp/l2tp_ip.ko net/l2tp/l2tp_ip.o net/l2tp/l2tp_ip.mod.o;  true
