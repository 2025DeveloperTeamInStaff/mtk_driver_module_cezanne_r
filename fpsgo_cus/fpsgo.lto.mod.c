#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x879b90de, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc15aa08c, __VMLINUX_SYMBOL_STR(xgf_get_task_state) },
	{ 0xc8aed3a8, __VMLINUX_SYMBOL_STR(xgf_cpumask_next) },
	{ 0xd25befb4, __VMLINUX_SYMBOL_STR(xgf_atomic_inc_return) },
	{ 0x54f804fe, __VMLINUX_SYMBOL_STR(xgf_get_task_pid) },
	{ 0x39810656, __VMLINUX_SYMBOL_STR(xgf_get_task_wake_cpu) },
	{ 0x5331ab2c, __VMLINUX_SYMBOL_STR(xgf_get_time) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9f7e0a15, __VMLINUX_SYMBOL_STR(xgf_num_possible_cpus) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x126c2e0, __VMLINUX_SYMBOL_STR(xgf_dep_frames_mod) },
	{ 0xf8a3afdc, __VMLINUX_SYMBOL_STR(xgf_get_dep) },
	{ 0x134267d4, __VMLINUX_SYMBOL_STR(xgf_free) },
	{ 0x35811a9a, __VMLINUX_SYMBOL_STR(xgf_alloc) },
	{ 0x344d7494, __VMLINUX_SYMBOL_STR(xgf_atomic_read) },
	{ 0xd928b841, __VMLINUX_SYMBOL_STR(xgf_hw_events_update) },
	{ 0xc7a566ab, __VMLINUX_SYMBOL_STR(xgf_clean_deps_list) },
	{ 0x8f591633, __VMLINUX_SYMBOL_STR(xgf_lookup_name) },
	{ 0xb2fdf81f, __VMLINUX_SYMBOL_STR(xgf_spid_sub_assign) },
	{ 0xadefd8, __VMLINUX_SYMBOL_STR(xgf_extra_sub_assign) },
	{ 0x9abce643, __VMLINUX_SYMBOL_STR(xgf_atomic_val_assign) },
	{ 0x96ab746e, __VMLINUX_SYMBOL_STR(xgf_atomic_set) },
	{ 0x46ea2c6b, __VMLINUX_SYMBOL_STR(xgf_trace) },
	{ 0x1b334f73, __VMLINUX_SYMBOL_STR(xgf_lockprove) },
	{ 0x14f65c55, __VMLINUX_SYMBOL_STR(xgf_stat_xchg_fp) },
	{ 0x9d5aca38, __VMLINUX_SYMBOL_STR(xgf_est_runtime_fp) },
	{ 0x9322005, __VMLINUX_SYMBOL_STR(notify_xgf_ko_ready) },
	{ 0x7584d268, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

