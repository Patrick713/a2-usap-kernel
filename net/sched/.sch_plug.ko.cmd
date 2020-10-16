cmd_net/sched/sch_plug.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_plug.ko net/sched/sch_plug.o net/sched/sch_plug.mod.o;  true
