cmd_net/netfilter/nfnetlink_queue.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/nfnetlink_queue.ko net/netfilter/nfnetlink_queue.o net/netfilter/nfnetlink_queue.mod.o;  true